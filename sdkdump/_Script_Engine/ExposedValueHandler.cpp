#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Function.hpp"
#include "ExposedValueHandler.hpp"
void* _Script_Engine::ExposedValueHandler::get_BoundFunction() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ExposedValueHandler::get_CopyRecords() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Function*& _Script_Engine::ExposedValueHandler::get_Function() {
    return *(_Script_CoreUObject::Function**)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::ExposedValueHandler::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ExposedValueHandler");
    return result;
}
