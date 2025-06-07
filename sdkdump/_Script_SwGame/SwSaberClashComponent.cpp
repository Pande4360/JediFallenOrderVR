#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "SwSaberClashComponent.hpp"
bool _Script_SwGame::SwSaberClashComponent::IsClashing() {
    return;
}
void _Script_SwGame::SwSaberClashComponent::OnButtonMashEnd() {
    return;
}
void* _Script_SwGame::SwSaberClashComponent::get_OnClashEnded() {
    return (void*)((uintptr_t)this + 0x1d8);
}
bool _Script_SwGame::SwSaberClashComponent::IsActionClashing(void* ActionName) {
    return;
}
void* _Script_SwGame::SwSaberClashComponent::get_OnClashButtonMashEnded() {
    return (void*)((uintptr_t)this + 0x1e8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSaberClashComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwSaberClashComponent");
    return result;
}
void _Script_SwGame::SwSaberClashComponent::OnFinishClashButtonPressed(void* ActionName, void* EventType, _Script_CoreUObject::Object* Handler) {
    return;
}
void _Script_SwGame::SwSaberClashComponent::OnButtonMashPressed() {
    return;
}
_Script_CoreUObject::Vector _Script_SwGame::SwSaberClashComponent::GetCurrentIndicatorWorld(_Script_CoreUObject::Vector SaberStart, _Script_CoreUObject::Vector SaberEnd) {
    return;
}
float _Script_SwGame::SwSaberClashComponent::GetCurrentIndicatorLocal() {
    return;
}
_Script_CoreUObject::Vector2D _Script_SwGame::SwSaberClashComponent::GetApprovableClashRange() {
    return;
}
void _Script_SwGame::SwSaberClashComponent::EndClash() {
    return;
}
