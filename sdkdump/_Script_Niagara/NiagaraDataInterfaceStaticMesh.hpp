#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraDataInterface.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDataInterfaceStaticMesh : public NiagaraDataInterface {
    private: char pad_28[0x28]; public:
    _Script_Engine::StaticMesh*& get_DefaultMesh();
    _Script_Engine::Actor*& get_Source();
    void* get_SectionFilter();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
