#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\ScriptStruct.hpp"
#include "UserDefinedStruct.hpp"
void* _Script_Engine::UserDefinedStruct::get_Status() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::UserDefinedStruct::get_Guid() {
    return (void*)((uintptr_t)this + 0x9c);
}
_Script_CoreUObject::Class* _Script_Engine::UserDefinedStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.UserDefinedStruct");
    return result;
}
