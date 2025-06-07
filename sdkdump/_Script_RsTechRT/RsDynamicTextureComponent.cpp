#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "RsDynamicTextureComponent.hpp"
_Script_Engine::Texture2D*& _Script_RsTechRT::RsDynamicTextureComponent::get_Texture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x170);
}
void* _Script_RsTechRT::RsDynamicTextureComponent::get_OriginalMaterials() {
    return (void*)((uintptr_t)this + 0x178);
}
int32_t& _Script_RsTechRT::RsDynamicTextureComponent::get_Height() {
    return *(int32_t*)((uintptr_t)this + 0x19c);
}
void* _Script_RsTechRT::RsDynamicTextureComponent::get_Target() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_RsTechRT::RsDynamicTextureComponent::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x190);
}
int32_t& _Script_RsTechRT::RsDynamicTextureComponent::get_Width() {
    return *(int32_t*)((uintptr_t)this + 0x198);
}
void* _Script_RsTechRT::RsDynamicTextureComponent::get_Format() {
    return (void*)((uintptr_t)this + 0x1a0);
}
bool _Script_RsTechRT::RsDynamicTextureComponent::get_bPixelFormatFloat() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a1 + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsDynamicTextureComponent::set_bPixelFormatFloat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsDynamicTextureComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsDynamicTextureComponent");
    return result;
}
_Script_Engine::Texture2D* _Script_RsTechRT::RsDynamicTextureComponent::GetTexture() {
    return;
}
