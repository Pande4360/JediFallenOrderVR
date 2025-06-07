#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Enum.hpp"
#include "UserDefinedEnum.hpp"
_Script_CoreUObject::Class* _Script_Engine::UserDefinedEnum::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.UserDefinedEnum");
    return result;
}
void* _Script_Engine::UserDefinedEnum::get_DisplayNameMap() {
    return (void*)((uintptr_t)this + 0x60);
}
