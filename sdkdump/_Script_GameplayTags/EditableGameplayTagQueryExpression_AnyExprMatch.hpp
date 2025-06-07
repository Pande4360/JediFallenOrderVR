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
struct EditableGameplayTagQueryExpression_AnyExprMatch : public EditableGameplayTagQueryExpression {
    private: char pad_28[0x10]; public:
    void* get_Expressions();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
