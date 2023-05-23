#pragma once

#include "types.h"
#include "math.hpp"
#include "vertexdata.hpp"

#include <vector>

struct ULod;
struct UModel;
struct UGeometry;

class UGeometryData {
    uint64_t mVTable;

    UVertexBuffer mVertexBuffer;
    UIndexBuffer mIndexBuffer;

    uint64_t mBoneIDs;
    uint64_t m0020;
    uint64_t m0028;
    uint64_t m0030;
    uint64_t m0038;

public:
    UGeometryData();
    virtual ~UGeometryData();

    void Deserialize(bStream::CStream* stream);
    void Serialize(bStream::CStream* stream);

    UVertexBuffer* GetVertexBuffer() { return &mVertexBuffer; }
    UIndexBuffer* GetIndexBuffer() { return &mIndexBuffer; }
};

class UModelData {
    uint64_t mVTable;

    std::vector<UGeometryData*> mGeometry;
    uint32_t m0014;

    std::vector<UVector4> mBoundingBoxes;
    std::vector<uint16_t> mShaderIndices;

    uint16_t mBoneIndices;
    uint32_t mSkeletonBinding;

    uint16_t mRenderMaskFlags;
    uint16_t mShaderIndexCount;

    uint64_t m0038;

public:
    UModelData();
    virtual ~UModelData();

    void Deserialize(bStream::CStream* stream);
    void Serialize(bStream::CStream* stream);

    UModel* GetModel();

    void Debug_DumpObjFile(bStream::CStream* stream);
};

class ULodData {
    std::vector<UModelData*> mModels;
    uint32_t m000C;

public:
    ULodData();
    virtual ~ULodData();

    void Deserialize(bStream::CStream* stream);
    void Serialize(bStream::CStream* stream);

    ULod* GetLod();

    void Debug_DumpObjFile();
};
