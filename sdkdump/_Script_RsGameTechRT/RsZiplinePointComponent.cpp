#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "RsZiplinePointComponent.hpp"
_Script_RsGameTechRT::RsZiplinePointComponent*& _Script_RsGameTechRT::RsZiplinePointComponent::get_NextPoint() {
    return *(_Script_RsGameTechRT::RsZiplinePointComponent**)((uintptr_t)this + 0xba0);
}
_Script_Engine::Actor*& _Script_RsGameTechRT::RsZiplinePointComponent::get_NextPointOwner() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0xb88);
}
void* _Script_RsGameTechRT::RsZiplinePointComponent::get_OnAttachToZipline() {
    return (void*)((uintptr_t)this + 0xb60);
}
void* _Script_RsGameTechRT::RsZiplinePointComponent::get_OnDetachFromZipline() {
    return (void*)((uintptr_t)this + 0xb70);
}
_Script_Engine::Actor*& _Script_RsGameTechRT::RsZiplinePointComponent::get_PreviousPointOwner() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0xb80);
}
_Script_RsGameTechRT::RsZiplinePointComponent*& _Script_RsGameTechRT::RsZiplinePointComponent::get_PreviousPoint() {
    return *(_Script_RsGameTechRT::RsZiplinePointComponent**)((uintptr_t)this + 0xb98);
}
float& _Script_RsGameTechRT::RsZiplinePointComponent::get_TubeRadius() {
    return *(float*)((uintptr_t)this + 0xb90);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsZiplinePointComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsZiplinePointComponent");
    return result;
}
void _Script_RsGameTechRT::RsZiplinePointComponent::SetEnabled(bool Enabled) {
    return;
}
