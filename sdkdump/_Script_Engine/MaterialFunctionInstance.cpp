#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialFunctionInstance.hpp"
#include "MaterialFunctionInterface.hpp"
_Script_Engine::MaterialFunctionInterface*& _Script_Engine::MaterialFunctionInstance::get_Parent() {
    return *(_Script_Engine::MaterialFunctionInterface**)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialFunctionInstance::get_StaticSwitchParameterValues() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::MaterialFunctionInstance::get_ScalarParameterValues() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_Engine::MaterialFunctionInterface*& _Script_Engine::MaterialFunctionInstance::get_base() {
    return *(_Script_Engine::MaterialFunctionInterface**)((uintptr_t)this + 0x48);
}
void* _Script_Engine::MaterialFunctionInstance::get_VectorParameterValues() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialFunctionInstance::get_TextureParameterValues() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialFunctionInstance::get_FontParameterValues() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::MaterialFunctionInstance::get_StaticComponentMaskParameterValues() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialFunctionInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialFunctionInstance");
    return result;
}
