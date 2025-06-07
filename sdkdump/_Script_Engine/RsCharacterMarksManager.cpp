#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "ColorMask.hpp"
#include "PrimitiveComponent.hpp"
#include "RsCharacterMarkInfo.hpp"
#include "RsCharacterMarksManager.hpp"
bool _Script_Engine::RsCharacterMarksManager::IsComponentManaged(_Script_Engine::PrimitiveComponent* Component) {
    return;
}
bool _Script_Engine::RsCharacterMarksManager::ManageComponent(_Script_Engine::PrimitiveComponent* Component, void* Priority) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::RsCharacterMarksManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsCharacterMarksManager");
    return result;
}
bool _Script_Engine::RsCharacterMarksManager::AddWetness(_Script_Engine::PrimitiveComponent* Component, float StartU, float EndU, float HeightV, float FalloffUV, bool bFromBottom, float Intensity, bool bRain) {
    return;
}
void _Script_Engine::RsCharacterMarksManager::StopManagingComponent(_Script_Engine::PrimitiveComponent* Component) {
    return;
}
void _Script_Engine::RsCharacterMarksManager::ClearAllRenderTargetChannels(_Script_Engine::ColorMask ChannelMask) {
    return;
}
bool _Script_Engine::RsCharacterMarksManager::AssociateComponents(_Script_Engine::PrimitiveComponent* PrimaryComponent, void*& Components) {
    return;
}
bool _Script_Engine::RsCharacterMarksManager::AddFillRect(_Script_Engine::PrimitiveComponent* Component, _Script_CoreUObject::Vector2D StartUV, _Script_CoreUObject::Vector2D EndUV, float FalloffUV, _Script_Engine::ColorMask ColorMask, float Intensity) {
    return;
}
bool _Script_Engine::RsCharacterMarksManager::AddDynamicMark(_Script_Engine::PrimitiveComponent* Component, _Script_Engine::RsCharacterMarkInfo& MarkInfo) {
    return;
}
bool _Script_Engine::RsCharacterMarksManager::AddDynamicLine(_Script_Engine::PrimitiveComponent* Component, void*& Points, bool bLineStrip, float Width, float Intensity, float EdgeIntensity, _Script_Engine::ColorMask ColorMask) {
    return;
}
