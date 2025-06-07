#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceSkeletalMesh : public NiagaraDataInterface {
    private: char pad_28[0x58]; public:
    _Script_Engine::SkeletalMesh*& get_DefaultMesh();
    _Script_Engine::Actor*& get_Source();
    void* get_SkinningMode();
    void* get_SamplingRegions();
    int32_t& get_WholeMeshLOD();
    void* get_SpecificBones();
    void* get_SpecificSockets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
