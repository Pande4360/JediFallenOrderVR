#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DrawFrustumComponent.hpp"
#include "PrimitiveComponent.hpp"
#include "Texture.hpp"
void* _Script_Engine::DrawFrustumComponent::get_FrustumColor() {
    return (void*)((uintptr_t)this + 0xb28);
}
_Script_Engine::Texture*& _Script_Engine::DrawFrustumComponent::get_Texture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0xb40);
}
float& _Script_Engine::DrawFrustumComponent::get_FrustumAngle() {
    return *(float*)((uintptr_t)this + 0xb2c);
}
float& _Script_Engine::DrawFrustumComponent::get_FrustumEndDist() {
    return *(float*)((uintptr_t)this + 0xb38);
}
float& _Script_Engine::DrawFrustumComponent::get_FrustumAspectRatio() {
    return *(float*)((uintptr_t)this + 0xb30);
}
float& _Script_Engine::DrawFrustumComponent::get_FrustumStartDist() {
    return *(float*)((uintptr_t)this + 0xb34);
}
_Script_CoreUObject::Class* _Script_Engine::DrawFrustumComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DrawFrustumComponent");
    return result;
}
