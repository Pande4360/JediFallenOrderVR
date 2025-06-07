#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InheritableComponentHandler.hpp"
_Script_CoreUObject::Class* _Script_Engine::InheritableComponentHandler::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InheritableComponentHandler");
    return result;
}
void* _Script_Engine::InheritableComponentHandler::get_Records() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::InheritableComponentHandler::get_UnnecessaryComponents() {
    return (void*)((uintptr_t)this + 0x38);
}
