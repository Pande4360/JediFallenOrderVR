#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MaterialFunctionInterface.hpp"
void* _Script_Engine::MaterialFunctionInterface::get_StateId() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::MaterialFunctionInterface::get_MaterialFunctionUsage() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialFunctionInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialFunctionInterface");
    return result;
}
