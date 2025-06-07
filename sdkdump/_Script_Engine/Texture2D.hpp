#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Texture.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Texture2D : public Texture {
    private: char pad_b0[0x38]; public:
    int32_t& get_StreamingIndex();
    int32_t& get_LevelIndex();
    int32_t& get_FirstResourceMemMip();
    bool get_bTemporarilyDisableStreaming();
    void set_bTemporarilyDisableStreaming(bool value);
    bool get_bIsStreamable();
    void set_bIsStreamable(bool value);
    bool get_bHasStreamingUpdatePending();
    void set_bHasStreamingUpdatePending(bool value);
    bool get_bForceMiplevelsToBeResident();
    void set_bForceMiplevelsToBeResident(bool value);
    bool get_bIgnoreStreamingMipBias();
    void set_bIgnoreStreamingMipBias(bool value);
    bool get_bGlobalForceMipLevelsToBeResident();
    void set_bGlobalForceMipLevelsToBeResident(bool value);
    void* get_AddressX();
    void* get_AddressY();
    void* get_ImportedSize();
    double& get_ForceMipLevelsToBeResidentTimestamp();
    static _Script_CoreUObject::Class* static_class();
    int32_t Blueprint_GetSizeY();
    int32_t Blueprint_GetSizeX();
}; // Size: 0xe8
#pragma pack(pop)
}
