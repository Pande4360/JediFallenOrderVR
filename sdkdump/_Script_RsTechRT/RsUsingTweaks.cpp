#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsUsingTweaks.hpp"
void* _Script_RsTechRT::RsUsingTweaks::get_Map() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsUsingTweaks::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsUsingTweaks");
    return result;
}
