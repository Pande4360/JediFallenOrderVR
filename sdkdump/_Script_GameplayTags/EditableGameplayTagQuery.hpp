#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_GameplayTags {
struct EditableGameplayTagQueryExpression;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
#pragma pack(push, 1)
struct EditableGameplayTagQuery : public _Script_CoreUObject::Object {
    private: char pad_28[0x70]; public:
    void* get_UserDescription();
    _Script_GameplayTags::EditableGameplayTagQueryExpression*& get_RootExpression();
    void* get_TagQueryExportText_Helper();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
