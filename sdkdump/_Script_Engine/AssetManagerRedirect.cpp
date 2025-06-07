#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AssetManagerRedirect.hpp"
void* _Script_Engine::AssetManagerRedirect::get_Old() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::AssetManagerRedirect::get_New() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::AssetManagerRedirect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AssetManagerRedirect");
    return result;
}
