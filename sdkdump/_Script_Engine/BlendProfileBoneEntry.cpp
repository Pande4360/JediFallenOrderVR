#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlendProfileBoneEntry.hpp"
void* _Script_Engine::BlendProfileBoneEntry::get_BoneReference() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::BlendProfileBoneEntry::get_BlendScale() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::BlendProfileBoneEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlendProfileBoneEntry");
    return result;
}
