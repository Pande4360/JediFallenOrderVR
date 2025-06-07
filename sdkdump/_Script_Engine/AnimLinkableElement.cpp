#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimLinkableElement.hpp"
#include "AnimMontage.hpp"
#include "AnimationAsset.hpp"
int32_t& _Script_Engine::AnimLinkableElement::get_SegmentIndex() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
_Script_Engine::AnimMontage*& _Script_Engine::AnimLinkableElement::get_LinkedMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x8);
}
float& _Script_Engine::AnimLinkableElement::get_SegmentBeginTime() {
    return *(float*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_Engine::AnimLinkableElement::get_SlotIndex() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::AnimLinkableElement::get_SegmentLength() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::AnimLinkableElement::get_LinkMethod() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::AnimLinkableElement::get_CachedLinkMethod() {
    return (void*)((uintptr_t)this + 0x19);
}
float& _Script_Engine::AnimLinkableElement::get_LinkValue() {
    return *(float*)((uintptr_t)this + 0x24);
}
_Script_Engine::AnimationAsset*& _Script_Engine::AnimLinkableElement::get_LinkedSequence() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::AnimLinkableElement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimLinkableElement");
    return result;
}
