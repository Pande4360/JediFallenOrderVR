#include "..\FUObjectArray.hpp"
#include "BlackboardKeyType.hpp"
#include "BlackboardKeyType_NativeEnum.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Enum.hpp"
_Script_CoreUObject::Class* _Script_AIModule::BlackboardKeyType_NativeEnum::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BlackboardKeyType_NativeEnum");
    return result;
}
void* _Script_AIModule::BlackboardKeyType_NativeEnum::get_EnumName() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Enum*& _Script_AIModule::BlackboardKeyType_NativeEnum::get_EnumType() {
    return *(_Script_CoreUObject::Enum**)((uintptr_t)this + 0x40);
}
