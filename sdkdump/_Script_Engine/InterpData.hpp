#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct InterpCurveEdSetup;
}
namespace _Script_Engine {
struct InterpGroupDirector;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpData : public _Script_CoreUObject::Object {
    private: char pad_28[0x48]; public:
    float& get_InterpLength();
    float& get_PathBuildTime();
    void* get_InterpGroups();
    _Script_Engine::InterpCurveEdSetup*& get_CurveEdSetup();
    float& get_EdSectionStart();
    float& get_EdSectionEnd();
    bool get_bShouldBakeAndPrune();
    void set_bShouldBakeAndPrune(bool value);
    _Script_Engine::InterpGroupDirector*& get_CachedDirectorGroup();
    void* get_AllEventNames();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
