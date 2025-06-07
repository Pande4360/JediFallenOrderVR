#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimationSettings : public DeveloperSettings {
    private: char pad_38[0x58]; public:
    int32_t& get_CompressCommandletVersion();
    void* get_KeyEndEffectorsMatchNameArray();
    void* get_DefaultCompressionAlgorithm();
    void* get_RotationCompressionFormat();
    void* get_TranslationCompressionFormat();
    float& get_MaxCurveError();
    float& get_AlternativeCompressionThreshold();
    bool get_ForceRecompression();
    void set_ForceRecompression(bool value);
    bool get_bOnlyCheckForMissingSkeletalMeshes();
    void set_bOnlyCheckForMissingSkeletalMeshes(bool value);
    bool get_bForceBelowThreshold();
    void set_bForceBelowThreshold(bool value);
    bool get_bFirstRecompressUsingCurrentOrDefault();
    void set_bFirstRecompressUsingCurrentOrDefault(bool value);
    bool get_bRaiseMaxErrorToExisting();
    void set_bRaiseMaxErrorToExisting(bool value);
    bool get_bTryExhaustiveSearch();
    void set_bTryExhaustiveSearch(bool value);
    bool get_bEnableSegmenting();
    void set_bEnableSegmenting(bool value);
    bool get_bEnablePerformanceLog();
    void set_bEnablePerformanceLog(bool value);
    bool get_bStripAnimationDataOnDedicatedServer();
    void set_bStripAnimationDataOnDedicatedServer(bool value);
    bool get_bTickAnimationOnSkeletalMeshInit();
    void set_bTickAnimationOnSkeletalMeshInit(bool value);
    bool get_bAnimationCompressCommandletUseRespawnExtensions();
    void set_bAnimationCompressCommandletUseRespawnExtensions(bool value);
    void* get_RespawnAnimCompressCommandletAlgorithmParametersProfiles();
    void* get_RespawnAnimCompressCommandletGroups();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
