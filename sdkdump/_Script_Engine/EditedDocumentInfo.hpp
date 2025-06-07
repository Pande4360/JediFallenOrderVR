#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct EditedDocumentInfo {
    private: char pad_0[0x30]; public:
    void* get_EditedObjectPath();
    void* get_SavedViewOffset();
    float& get_SavedZoomAmount();
    _Script_CoreUObject::Object*& get_EditedObject();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
