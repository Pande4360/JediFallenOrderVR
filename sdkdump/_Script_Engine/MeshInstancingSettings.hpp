#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MeshInstancingSettings {
    private: char pad_0[0x18]; public:
    void* get_ActorClassToUse();
    int32_t& get_InstanceReplacementThreshold();
    void* get_MeshReplacementMethod();
    bool get_bSkipMeshesWithVertexColors();
    void set_bSkipMeshesWithVertexColors(bool value);
    bool get_bUseHLODVolumes();
    void set_bUseHLODVolumes(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
