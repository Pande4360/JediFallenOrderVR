#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PreviewAssetAttachContainer.hpp"
void* _Script_Engine::PreviewAssetAttachContainer::get_AttachedObjects() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::PreviewAssetAttachContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PreviewAssetAttachContainer");
    return result;
}
