#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EditableGameplayTagQueryExpression.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
#pragma pack(push, 1)
struct EditableGameplayTagQueryExpression_AllTagsMatch : public EditableGameplayTagQueryExpression {
    private: char pad_28[0x20]; public:
    void* get_Tags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
