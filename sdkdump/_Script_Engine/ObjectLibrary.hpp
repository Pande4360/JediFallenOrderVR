#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ObjectLibrary : public _Script_CoreUObject::Object {
    private: char pad_28[0x80]; public:
    void* get_ObjectBaseClass();
    bool get_bHasBlueprintClasses();
    void set_bHasBlueprintClasses(bool value);
    void* get_Objects();
    void* get_WeakObjects();
    bool get_bUseWeakReferences();
    void set_bUseWeakReferences(bool value);
    bool get_bIsFullyLoaded();
    void set_bIsFullyLoaded(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
