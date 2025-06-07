#include "..\FUObjectArray.hpp"
#include "BlackboardKeyType.hpp"
#include "BlackboardKeyType_Enum.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Enum.hpp"
_Script_CoreUObject::Enum*& _Script_AIModule::BlackboardKeyType_Enum::get_EnumType() {
    return *(_Script_CoreUObject::Enum**)((uintptr_t)this + 0x30);
}
void* _Script_AIModule::BlackboardKeyType_Enum::get_EnumName() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_AIModule::BlackboardKeyType_Enum::get_bIsEnumNameValid() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AIModule::BlackboardKeyType_Enum::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BlackboardKeyType_Enum");
    return result;
}
void _Script_AIModule::BlackboardKeyType_Enum::set_bIsEnumNameValid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
