#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialFunctionInfo.hpp"
#include "MaterialFunctionInterface.hpp"
_Script_Engine::MaterialFunctionInterface*& _Script_Engine::MaterialFunctionInfo::get_Function() {
    return *(_Script_Engine::MaterialFunctionInterface**)((uintptr_t)this + 0x10);
}
void* _Script_Engine::MaterialFunctionInfo::get_StateId() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialFunctionInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialFunctionInfo");
    return result;
}
