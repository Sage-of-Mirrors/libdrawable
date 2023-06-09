#pragma once

#include "types.h"
#include "math.hpp"

#include "shaderdata.hpp"

#include <string>

const uint32_t LOD_MAX = 4;

struct UDrawable;

/* The LOD levels that drawables can define. */
enum class EDrawableLod : uint8_t {
    LOD_HIGH = 0,
    LOD_MED,
    LOD_LOW,
    LOD_VLOW,

    LOD_MAX
};

class UDrawableData {
    uint64_t mVTable;            // 0x00

    class UBlockMap* mBlockMap;        // 0x08
    UShaderContainer mShaderContainer;  // 0x10
    class USkeletonData* mSkeletonData;      // 0x18

    UVector4 mBoundingSphere; // 0x20, w is radius
    UVector4 mBoundingBoxMin; // 0x30, w has no meaning
    UVector4 mBoundingBoxMax; // 0x40, w has no meaning

    class ULodData* mLodData[LOD_MAX];   // 0x50, 0x58, 0x60, 0x68
    float mLodDistances[LOD_MAX];  // 0x70, 0x74, 0x78, 0x7C
    uint32_t mLodFlags[LOD_MAX];   // 0x80, 0x84, 0x88, 0x8C

    class UJointLimitData* mJointLimitData; // 0x90
    uint64_t mPadding1;   // 0x98

    uint16_t mExpressionCount;  // 0xA0
    uint16_t mPadding2;         // 0xA2
    uint32_t mExpressions;      // 0xA4

    std::string mName;         // 0xA8
    uint64_t m00B0;         // 0xB0
    uint64_t mCollisionPointer; // 0xB8
    uint64_t mSamplers;     // 0xC0
    uint64_t mPadding3;     // 0xC8

    void CalculateBoundingBox(UDrawable* drawable);
    void CalculateBoundingSphere(UDrawable* drawable);

public:
    UDrawableData();
    virtual ~UDrawableData();

    void Deserialize(bStream::CStream* stream);
    void Serialize(bStream::CMemoryStream* stream);

    UDrawable* GetDrawable();
    void SetDrawable(UDrawable* drawable);
};
