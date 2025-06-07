#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "UserListEntry.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct UserObjectListEntry : public UserListEntry {
    static _Script_CoreUObject::Class* static_class();
    void OnListItemObjectSet(_Script_CoreUObject::Object* ListItemObject);
    _Script_CoreUObject::Object* GetListItemObject();
}; // Size: 0x28
#pragma pack(pop)
}
