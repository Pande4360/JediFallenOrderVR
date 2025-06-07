#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LocalLightComponent.hpp"
#include "RectLightComponent.hpp"
#include "Texture.hpp"
float& _Script_Engine::RectLightComponent::get_SourceWidth() {
    return *(float*)((uintptr_t)this + 0x438);
}
float& _Script_Engine::RectLightComponent::get_SourceHeight() {
    return *(float*)((uintptr_t)this + 0x43c);
}
void _Script_Engine::RectLightComponent::SetSourceHeight(float NewValue) {
    return;
}
_Script_Engine::Texture*& _Script_Engine::RectLightComponent::get_SourceTexture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x440);
}
_Script_CoreUObject::Class* _Script_Engine::RectLightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RectLightComponent");
    return result;
}
void _Script_Engine::RectLightComponent::SetSourceWidth(float bNewValue) {
    return;
}
