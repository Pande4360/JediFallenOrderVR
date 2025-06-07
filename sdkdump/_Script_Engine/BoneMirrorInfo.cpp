#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoneMirrorInfo.hpp"
int32_t& _Script_Engine::BoneMirrorInfo::get_SourceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BoneMirrorInfo::get_BoneFlipAxis() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::BoneMirrorInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BoneMirrorInfo");
    return result;
}
