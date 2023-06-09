#pragma once

const uint32_t LEN_SHADER_PARAM_NAMES = 856;

const char* SHADER_PARAM_NAMES[] {
    "trilinearclamp",
    "pointclamp",
    "trilinearwrap",
    "miplinearclamp",
    "projdecaltexarraysampler",
    "miplinearwrap",
    "trilinearborderblack",
    "anisotropic16xwrap",
    "raintexturesamplerglobal",
    "gcsmshadowtexturesamp",
    "bumpsampler",
    "diffusesampler",
    "specsampler",
    "specsampler2",
    "_padding_0_",
    "_alphatocoveragescale",
    "aerialperspectiveslicedistr",
    "albedooverridetex",
    "albedopalettetex",
    "alphascale",
    "alphauvset",
    "anglesnearfar",
    "anisonoisespectexture",
    "aomapintensity0",
    "aotexturetex",
    "aspectratios",
    "backlightcolor",
    "backlightintensities",
    "backlightoffset",
    "batchcomputeparamsbuffer",
    "batchdisabledbitfield",
    "blendamtcol",
    "blendamtintensity",
    "blendsoftness",
    "bloodflowmask",
    "bloommod",
    "brokendiffusecolor",
    "brokenspecularcolor",
    "bumpiness",
    "bumpoffsetamount",
    "bumpoffsetflatatten",
    "bumpoffsetheightatten",
    "bumpoffsetviewatten",
    "bumptex",
    "bumptexture",
    "bumptexture2",
    "bumptexture_layer0",
    "bumptexture_layer1",
    "bumptexture_layer2",
    "bumptexture_layer3",
    "busehardlight",
    "buseproceduralblend",
    "cableambient",
    "cablediffuse",
    "cablediffuse2",
    "cableemissive",
    "calcbyambientcol",
    "calcbyambientintensity",
    "calcbysuncol",
    "calcbysunintensity",
    "clamplookuptexture",
    "clipplanes",
    "clothnormals",
    "clothvertices2",
    "clothvertices2prev",
    "comboheighttexturefur01",
    "comboheighttexturefur23",
    "comboheighttexturefur45",
    "comboheighttexturefur67",
    "computedatabuffer",
    "computeinstancebuffer",
    "controlfilter",
    "controlfiltera",
    "controlfilterb",
    "controlfilterc",
    "controltexturetex",
    "controltexturetexa",
    "controltexturetexb",
    "controltexturetexc",
    "controltileamount",
    "controluvset",
    "crackdecalbumpalphathreshold",
    "crackdecalbumpamount",
    "crackdecalbumptilescale",
    "crackedgebumpamount",
    "crackedgebumptilescale",
    "crackmatrix",
    "crackoffset",
    "cullspheres",
    "currentinscatterrm0",
    "currentinscatterrm1",
    "currentinscatterrm2",
    "debugshowlivery",
    "decalblendopacitygbuffer0",
    "decalblendopacitygbuffer1",
    "decalblendopacitygbuffer2",
    "decalblendopacitygbuffer3",
    "decaltint",
    "detailindexoverride",
    "detailindices",
    "detailsettings",
    "detailsettings0",
    "detailsettings1",
    "detailsettings2",
    "detailsettings3",
    "detailtexarrayd",
    "detailtexarrayn",
    "diffuse2modspec",
    "diffusecolormultiplier",
    "diffusetex",
    "diffusetex2",
    "diffusetexture_layer0",
    "diffusetexture_layer1",
    "diffusetexture_layer2",
    "diffusetexture_layer3",
    "dirtalphachannel",
    "dirtblend",
    "dirtcolor",
    "dirtdiffusetex",
    "dirtfactor",
    "dirtintensity",
    "dirtnoisetex",
    "dirtroughness",
    "dirttilescale",
    "dirttintchannel",
    "dirtuvscale",
    "dirtuvset",
    "dirtvertpushscale",
    "distmapcenterval",
    "distortiontexture",
    "edgesmoothness",
    "enablealpha",
    "enablenearcamerafade",
    "enablespec",
    "engravingbumpiness",
    "engravingcavityamt",
    "engravingcreatebump",
    "engravingdiffuseamt",
    "engravingedgesmoothness",
    "engravinginvert",
    "engravingmaskwidth",
    "engravingmaterialthreshold",
    "engravingsampleoffset",
    "engravingsecondaytexture",
    "engravingselfshadowamt",
    "engravingshow",
    "engravingshowmaterial",
    "engravingtexturetex",
    "exposuretexture",
    "fadeexponent",
    "fincompression0",
    "finfurblur0",
    "finlayercompensation0",
    "finlayerinc0",
    "finstartposition0",
    "fixedgatheredlighttex",
    "flowtexture",
    "fogandopacityoverride",
    "fogcolor",
    "fogtexture",
    "foliagebranchbendpivot0",
    "fonttexture",
    "fresnel",
    "fresnelselector",
    "furalphaclip03",
    "furalphaclip47",
    "furalphadistance",
    "furaoblend0",
    "furaofurdepth0",
    "furattencoef0",
    "furbasetranslucencyadj0",
    "furbendwindinfluence0",
    "furbendwindmaxspeedclamp0",
    "furdirtstiffness0",
    "furfinlengthadjust0",
    "furfinopacityadjust0",
    "furglobalparams0",
    "furglobalparams1",
    "furgravitywindblend0",
    "furlayerparams",
    "furlength0",
    "furlengthjitter0",
    "furmaskusingbluetint0",
    "furmaxlayers0",
    "furminlayers0",
    "furnoiseuvscale0",
    "furpervtxhacklesstiffness0",
    "furpervtxscriptedstiffness0",
    "furpervtxstiffness0",
    "furselfshadowmin0",
    "furshadow03",
    "furshadow47",
    "furshellopacityadjust0",
    "furstiffness0",
    "furtiptranslucencyadj0",
    "furuvscales",
    "furwetstiffness0",
    "gbuffertexture1",
    "glodfadetilescale",
    "glodtransitionrange",
    "grassnoisetilescale",
    "hardalphablend",
    "hasclothswitch",
    "haspuddleswitch",
    "haswrinkleswitch",
    "hbbrangebias1234",
    "hbbrangescale1234",
    "heightbias",
    "heightfilter",
    "heightopacity",
    "heightscale",
    "heighttexture",
    "heighttexturex",
    "heightuvset",
    "horsesheentexture",
    "impostertexarray1",
    "impostertexarray2",
    "intensity",
    "invcontrol",
    "invertnormal",
    "iscrackdetail",
    "liverycontroltex",
    "liverymatselector",
    "liverypalselector",
    "lookingglassblurtexture",
    "lookingglassdistortioncenter1",
    "lookingglassdistortioncenter2",
    "lookingglassdistortionparams",
    "lookuptexture",
    "lookupuvset",
    "ly10detailsettings",
    "lyr0albedomodifier",
    "lyr0bumpiness",
    "lyr0cavity",
    "lyr0detailsettings",
    "lyr0diffusetex",
    "lyr0fresnel",
    "lyr0materialatex",
    "lyr0materialbtex",
    "lyr0maxwetness",
    "lyr0metalnessmodifier",
    "lyr0normaltex",
    "lyr0normaluvset",
    "lyr0porosity",
    "lyr0roughnessmodifier",
    "lyr0tint",
    "lyr0translucency",
    "lyr0uvset",
    "lyr1bumpiness",
    "lyr1cavity",
    "lyr1detailsettings",
    "lyr1diffusetex",
    "lyr1fresnel",
    "lyr1materialatex",
    "lyr1materialbtex",
    "lyr1maxwetness",
    "lyr1normaltex",
    "lyr1porosity",
    "lyr1tileamount",
    "lyr1tint",
    "lyr1translucency",
    "lyr1uvscale",
    "lyr1uvset",
    "marktaaghostingbit",
    "materialatex",
    "materialbtexture",
    "materialbtexture2",
    "materialmapatexture_layer0",
    "materialmapatexture_layer1",
    "materialmapatexture_layer2",
    "materialmapatexture_layer3",
    "materialtaainvalidvelocitythreshold",
    "maxdirtintensity",
    "maxmudintensity",
    "maxshowdirttex",
    "maxshowsplattertex",
    "maxsplatterend",
    "maxsplatterstart",
    "maxvertpushend",
    "maxvertpushstart",
    "maxwetness",
    "mirrorreflection",
    "mixamtcol",
    "newfuralpha0",
    "newfurfluffup",
    "newfursoften0",
    "nightonly",
    "noisetexture",
    "normalsampledist",
    "numletters",
    "numtargets",
    "occlusiontex",
    "oilparams",
    "oilspanandwibble",
    "oilthickness",
    "onofffades",
    "onofftimes",
    "opacity",
    "palettedivider",
    "paletteselector",
    "panedepthoffset",
    "parallaxscalebias",
    "parallaxselfshadowamount",
    "pbrcavityrange",
    "pbrdetail_ao",
    "pbrdetail_metallic",
    "pbrdetail_roughness",
    "pbrdetail_sheen",
    "pbrdetail_translucency",
    "pbrglassiness",
    "pbrtweak_ao",
    "pbrtweak_detail",
    "pbrtweak_detailindex_",
    "pbrtweak_fresnel",
    "pbrtweak_metallic",
    "pbrtweak_roughness",
    "pbrtweak_sheen",
    "pbrtweak_translucency",
    "placementextents",
    "placementtexture",
    "pollenexistence",
    "pollenlayer",
    "pollenlayer1",
    "pollenlayer2",
    "pollenlayer3",
    "pollenlayerplacement",
    "porosity",
    "proceduraldir",
    "proceduralthreshold",
    "projdecalreposmtx",
    "puddleheightbias",
    "puddlemaskscale",
    "pushpivotbuffer",
    "pushspheres",
    "pushspherespreviousframe",
    "pxmbiases1234",
    "pxmenabled",
    "pxmscales1234",
    "radiusscale",
    "reflectivity",
    "regiontintamount",
    "ripplebumpiness",
    "ripplescale",
    "riverfoamtexturescale",
    "roughnessbasedonalbedo",
    "rustnoisetex",
    "scatteringluttex",
    "scsvertexinputattributes",
    "shadowfalloff",
    "shellcompression0",
    "shellfurblur0",
    "shelllayerstart0",
    "skinnedtangentsdef",
    "skinnedvertexdef",
    "slodcolors",
    "slodinfobuffer",
    "smallhdrcubetex",
    "snowmelt",
    "sootcolor",
    "sootroughness",
    "specmapintmask",
    "specular",
    "specularcolor",
    "speculartex",
    "speculartex2",
    "speculartexture",
    "speculartexture2",
    "splatdiffusetex",
    "splatnmrtex",
    "stippletexture",
    "sumgatheredlighttex",
    "svertsin",
    "targetpositionspacked",
    "tattooalbedo",
    "terrainfresnel",
    "tessellationmultiplier",
    "tintblendamount",
    "tintbumptexture",
    "tintintensity",
    "tintoverride",
    "tintpaletteselector",
    "tintpaletteselector_cse",
    "tintpalettetex",
    "tinttexture",
    "tinyhdrtex",
    "translucencyastintmask",
    "transmittanceluttex",
    "treehorizontalbendexp0",
    "treehorizontalbendscale0",
    "treehorizontalbendstartratio0",
    "treehorizontalbendupperbound0",
    "treemmscale0",
    "treemmspeed0",
    "treeverticalbendexp0",
    "treeverticalbendscale0",
    "treeverticalbendupperbound0",
    "umpedwindexponent0",
    "umpedwindnoiseratio0",
    "umpedwindnoisescaleminmax0",
    "umpedwindscale0",
    "umwindexponent0",
    "umwindnoiseratio0",
    "umwindnoisescaleminmax0",
    "umwindscale0",
    "useddxddy",
    "usefakecutout",
    "useoverlayblend",
    "usepaintedwetness",
    "usetessellation",
    "usetranslucency",
    "useworldspacenormals",
    "uvscalebias",
    "uvset",
    "vehtintpalettetex",
    "vehwrinklebumpscale",
    "vehwrinklemasktexture",
    "vehwrinklemultiplier",
    "vehwrinkletexture",
    "waterheight",
    "wavemovement",
    "waveoffset",
    "wetness",
    "wetnessmultiplier",
    "windamount",
    "windminmaxthreshholds0",
    "windowframeparallax",
    "windowinteriorparallax",
    "windowopacity",
    "wrinkleaoscale",
    "wrinklebasefadeoutamount",
    "wrinklebasefadeoutend",
    "wrinklebumpscale",
    "wrinklecomponentindex",
    "wrinklefadeinstart",
    "wrinklemasktexture",
    "wrinklemultiplier",
    "wrinkletexture",
    "_alphaToCoverageScale",
    "AOMapIntensity0",
    "AlphaScale",
    "AnglesNearFar",
    "AspectRatios",
    "BacklightColor",
    "BacklightIntensities",
    "BacklightOffset",
    "BatchComputeParamsBuffer",
    "BatchDisabledBitField",
    "BloodFlowMask",
    "BloomMod",
    "BrokenDiffuseColor",
    "BrokenSpecularColor",
    "BumpOffsetAmount",
    "BumpOffsetFlatAtten",
    "BumpOffsetHeightAtten",
    "BumpOffsetViewAtten",
    "BumpTex",
    "BumpTexture_layer0",
    "BumpTexture_layer1",
    "BumpTexture_layer2",
    "BumpTexture_layer3",
    "Bumpiness",
    "CableAmbient",
    "CableDiffuse",
    "CableDiffuse2",
    "CableEmissive",
    "ClipPlanes",
    "ComboHeightTextureFur01",
    "ComboHeightTextureFur23",
    "ComboHeightTextureFur45",
    "ComboHeightTextureFur67",
    "ComputeDataBuffer",
    "ComputeInstanceBuffer",
    "CrackDecalBumpAlphaThreshold",
    "CrackDecalBumpAmount",
    "CrackDecalBumpTileScale",
    "CrackEdgeBumpAmount",
    "CrackEdgeBumpTileScale",
    "CrackMatrix",
    "CrackOffset",
    "CullSpheres",
    "DecalBlendOpacityGBuffer0",
    "DecalBlendOpacityGBuffer1",
    "DecalBlendOpacityGBuffer2",
    "DecalBlendOpacityGBuffer3",
    "DecalTint",
    "DetailTexArrayD",
    "DetailTexArrayN",
    "Diffuse2ModSpec",
    "DiffuseColorMultiplier",
    "DiffuseTex",
    "DiffuseTex2",
    "DiffuseTexture_layer0",
    "DiffuseTexture_layer1",
    "DiffuseTexture_layer2",
    "DiffuseTexture_layer3",
    "DirtBlend",
    "DistMapCenterVal",
    "DistortionTexture",
    "EdgeSmoothness",
    "EnableAlpha",
    "EnableNearCameraFade",
    "EngravingBumpiness",
    "EngravingCavityAmt",
    "EngravingCreateBump",
    "EngravingDiffuseAmt",
    "EngravingEdgeSmoothness",
    "EngravingInvert",
    "EngravingMaskWidth",
    "EngravingMaterialThreshold",
    "EngravingSampleOffset",
    "EngravingSelfShadowAmt",
    "EngravingShow",
    "EngravingShowMaterial",
    "ExposureTexture",
    "FadeExponent",
    "FixedGatheredLightTex",
    "FlowTexture",
    "FogAndOpacityOverride",
    "FogColor",
    "FogTexture",
    "FontTexture",
    "Fresnel",
    "HBBRangeBias1234",
    "HBBRangeScale1234",
    "HardAlphaBlend",
    "HeightOpacity",
    "ImposterTexArray1",
    "ImposterTexArray2",
    "Intensity",
    "InvertNormal",
    "IsCrackDetail",
    "LookingGlassBlurTexture",
    "MaterialATex",
    "MaterialBTexture",
    "MaterialBTexture2",
    "MaterialMapATexture_layer0",
    "MaterialMapATexture_layer1",
    "MaterialMapATexture_layer2",
    "MaterialMapATexture_layer3",
    "MaterialTAAInvalidVelocityThreshold",
    "MirrorReflection",
    "NightOnly",
    "NormalSampleDist",
    "NumLetters",
    "NumTargets",
    "OcclusionTex",
    "OilParams",
    "OilSpanAndWibble",
    "OilThickness",
    "OnOffFades",
    "OnOffTimes",
    "Opacity",
    "PBRCavityRange",
    "PBRDetail_AO",
    "PBRDetail_metallic",
    "PBRDetail_roughness",
    "PBRDetail_sheen",
    "PBRDetail_translucency",
    "PBRGlassiness",
    "PBRTweak_AO",
    "PBRTweak_detail",
    "PBRTweak_detailIndex_",
    "PBRTweak_fresnel",
    "PBRTweak_metallic",
    "PBRTweak_roughness",
    "PBRTweak_sheen",
    "PBRTweak_translucency",
    "PaneDepthOffset",
    "PlacementExtents",
    "PlacementTexture",
    "PollenExistence",
    "PollenLayer",
    "PollenLayer1",
    "PollenLayer2",
    "PollenLayer3",
    "PollenLayerPlacement",
    "Porosity",
    "ProjDecalReposMtx",
    "PushPivotBuffer",
    "PushSpheres",
    "PushSpheresPreviousFrame",
    "PxmBiases1234",
    "PxmEnabled",
    "PxmScales1234",
    "RadiusScale",
    "RegionTintAmount",
    "RippleBumpiness",
    "RippleScale",
    "RiverFoamTextureScale",
    "SLODInfoBuffer",
    "ScatteringLUTTex",
    "ShadowFalloff",
    "SkinnedTangentsDef",
    "SkinnedVertexDef",
    "SlodColors",
    "SmallHDRCubeTex",
    "SnowMelt",
    "SpecularColor",
    "SpecularTex",
    "SpecularTex2",
    "SpecularTexture",
    "SpecularTexture2",
    "StippleTexture",
    "SumGatheredLightTex",
    "TargetPositionsPacked",
    "TerrainFresnel",
    "TintBlendAmount",
    "TintOverride",
    "TintPaletteTex",
    "TinyHDRTex",
    "TransmittanceLUTTex",
    "UVScaleBias",
    "UseDdxDdy",
    "UseOverlayBlend",
    "UseTranslucency",
    "VehWrinkleBumpScale",
    "VehWrinkleMaskTexture",
    "VehWrinkleTexture",
    "WaterHeight",
    "WaveMovement",
    "WaveOffset",
    "Wetness",
    "WindAmount",
    "WindMinMaxThreshholds0",
    "WindowFrameParallax",
    "WindowInteriorParallax",
    "WindowOpacity",
    "WrinkleAOScale",
    "WrinkleBumpScale",
    "WrinkleMaskTexture",
    "WrinkleTexture",
    "aerialPerspectiveSliceDistr",
    "albedoOverrideTex",
    "albedoPaletteTex",
    "alphaUVSet",
    "anisoNoiseSpecTexture",
    "aoTextureTex",
    "bUseHardLight",
    "bUseProceduralBlend",
    "blendAmtCol",
    "blendAmtIntensity",
    "blendSoftness",
    "bumpTexture",
    "bumpTexture2",
    "calcByAmbientCol",
    "calcByAmbientIntensity",
    "calcBySunCol",
    "calcBySunIntensity",
    "clampLookupTexture",
    "clothNormals",
    "clothVertices2",
    "clothVertices2Prev",
    "controlFilter",
    "controlFilterA",
    "controlFilterB",
    "controlFilterC",
    "controlTextureTex",
    "controlTextureTexA",
    "controlTextureTexB",
    "controlTextureTexC",
    "controlTileAmount",
    "controlUVSet",
    "currentInscatterRM0",
    "currentInscatterRM1",
    "currentInscatterRM2",
    "debugShowLivery",
    "detailIndexOverride",
    "detailIndices",
    "detailSettings",
    "detailSettings0",
    "detailSettings1",
    "detailSettings2",
    "detailSettings3",
    "dirtAlphaChannel",
    "dirtColor",
    "dirtDiffuseTex",
    "dirtFactor",
    "dirtIntensity",
    "dirtNoiseTex",
    "dirtRoughness",
    "dirtTileScale",
    "dirtTintChannel",
    "dirtUVScale",
    "dirtUVSet",
    "dirtVertPushScale",
    "enableSpec",
    "engravingSecondayTexture",
    "engravingTextureTex",
    "finCompression0",
    "finFurBlur0",
    "finLayerCompensation0",
    "finLayerInc0",
    "finStartPosition0",
    "foliageBranchBendPivot0",
    "furAOBlend0",
    "furAOFurDepth0",
    "furAlphaClip03",
    "furAlphaClip47",
    "furAlphaDistance",
    "furAttenCoef0",
    "furBaseTranslucencyAdj0",
    "furBendWindInfluence0",
    "furBendWindMaxSpeedClamp0",
    "furDirtStiffness0",
    "furFinLengthAdjust0",
    "furFinOpacityAdjust0",
    "furGlobalParams0",
    "furGlobalParams1",
    "furGravityWindBlend0",
    "furLayerParams",
    "furLength0",
    "furLengthJitter0",
    "furMaskUsingBlueTint0",
    "furMaxLayers0",
    "furMinLayers0",
    "furNoiseUVScale0",
    "furPerVtxHacklesStiffness0",
    "furPerVtxScriptedStiffness0",
    "furPerVtxStiffness0",
    "furSelfShadowMin0",
    "furShadow03",
    "furShadow47",
    "furShellOpacityAdjust0",
    "furStiffness0",
    "furTipTranslucencyAdj0",
    "furUvScales",
    "furWetStiffness0",
    "gLodFadeTileScale",
    "gLodTransitionRange",
    "grassNoiseTileScale",
    "hasClothSwitch",
    "hasPuddleSwitch",
    "hasWrinkleSwitch",
    "heightBias",
    "heightFilter",
    "heightScale",
    "heightTexture",
    "heightTextureX",
    "heightUVSet",
    "horseSheenTexture",
    "invControl",
    "liveryControlTex",
    "liveryMatSelector",
    "liveryPalSelector",
    "lookingGlassDistortionCenter1",
    "lookingGlassDistortionCenter2",
    "lookingGlassDistortionParams",
    "lookupTexture",
    "lookupUVSet",
    "ly10DetailSettings",
    "lyr0AlbedoModifier",
    "lyr0Bumpiness",
    "lyr0Cavity",
    "lyr0DetailSettings",
    "lyr0DiffuseTex",
    "lyr0Fresnel",
    "lyr0MaterialATex",
    "lyr0MaterialBTex",
    "lyr0MaxWetness",
    "lyr0MetalnessModifier",
    "lyr0NormalTex",
    "lyr0NormalUVSet",
    "lyr0Porosity",
    "lyr0RoughnessModifier",
    "lyr0Tint",
    "lyr0Translucency",
    "lyr0UVSet",
    "lyr1Bumpiness",
    "lyr1Cavity",
    "lyr1DetailSettings",
    "lyr1DiffuseTex",
    "lyr1Fresnel",
    "lyr1MaterialATex",
    "lyr1MaterialBTex",
    "lyr1MaxWetness",
    "lyr1NormalTex",
    "lyr1Porosity",
    "lyr1TileAmount",
    "lyr1Tint",
    "lyr1Translucency",
    "lyr1UVScale",
    "lyr1UVSet",
    "markTAAGhostingBit",
    "maxDirtIntensity",
    "maxMudIntensity",
    "maxShowDirtTex",
    "maxShowSplatterTex",
    "maxSplatterEnd",
    "maxSplatterStart",
    "maxVertPushEnd",
    "maxVertPushStart",
    "maxWetness",
    "mixAmtCol",
    "newFurAlpha0",
    "newFurFluffUp",
    "newFurSoften0",
    "noiseTexture",
    "occlusionTex",
    "paletteDivider",
    "paletteSelector",
    "parallaxScaleBias",
    "parallaxSelfShadowAmount",
    "proceduralDir",
    "proceduralThreshold",
    "puddleHeightBias",
    "puddleMaskScale",
    "roughnessBasedOnAlbedo",
    "rustNoiseTex",
    "sCSVertexInputAttributes",
    "sVertsIn",
    "shellCompression0",
    "shellFurBlur0",
    "shellLayerStart0",
    "sootColor",
    "sootRoughness",
    "specMapIntMask",
    "splatDiffuseTex",
    "splatNMRTex",
    "tattooAlbedo",
    "tessellationMultiplier",
    "tintBumpTexture",
    "tintIntensity",
    "tintPaletteSelector",
    "tintPaletteSelector_CSE",
    "tintTexture",
    "translucencyAsTintMask",
    "treeHorizontalBendExp0",
    "treeHorizontalBendScale0",
    "treeHorizontalBendStartRatio0",
    "treeHorizontalBendUpperBound0",
    "treeMMScale0",
    "treeMMSpeed0",
    "treeVerticalBendExp0",
    "treeVerticalBendScale0",
    "treeVerticalBendUpperBound0",
    "umPedWindExponent0",
    "umPedWindNoiseRatio0",
    "umPedWindNoiseScaleMinMax0",
    "umPedWindScale0",
    "umWindExponent0",
    "umWindNoiseRatio0",
    "umWindNoiseScaleMinMax0",
    "umWindScale0",
    "useFakeCutout",
    "usePaintedWetness",
    "useTessellation",
    "useWorldSpaceNormals",
    "uvSet",
    "vehTintPaletteTex",
    "vehWrinkleMultiplier",
    "wetnessMultiplier",
    "wrinkleBaseFadeOutAmount",
    "wrinkleBaseFadeOutEnd",
    "wrinkleComponentIndex",
    "wrinkleFadeInStart",
    "wrinkleMultiplier"
};