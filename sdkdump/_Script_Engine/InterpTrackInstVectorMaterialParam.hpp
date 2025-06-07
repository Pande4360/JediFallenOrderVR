#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrackInst.hpp"
namespace _Script_Engine {
struct InterpTrackVectorMaterialParam;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackInstVectorMaterialParam : public InterpTrackInst {
    private: char pad_28[0x38]; public:
    void* get_MaterialInstances();
    void* get_ResetVectors();
    void* get_PrimitiveMaterialRefs();
    _Script_Engine::InterpTrackVectorMaterialParam*& get_InstancedTrack();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
