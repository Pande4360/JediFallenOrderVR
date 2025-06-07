#include "..\FUObjectArray.hpp"
#include "PhotoModeHUD_C.hpp"
#include "..\_Game_TechArt_Photomode_PhotoMode_HUD_Widget\PhotoMode_HUD_Widget_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_SwGame\SwPhotomodeCameraHUD.hpp"
void* _Game_TechArt_Photomode_PhotoModeHUD::PhotoModeHUD_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x450);
}
_Script_Engine::SceneComponent*& _Game_TechArt_Photomode_PhotoModeHUD::PhotoModeHUD_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x458);
}
void _Game_TechArt_Photomode_PhotoModeHUD::PhotoModeHUD_C::OnDestroyed_Event_0(_Script_Engine::Actor* DestroyedActor) {
    return;
}
_Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C*& _Game_TechArt_Photomode_PhotoModeHUD::PhotoModeHUD_C::get_HUD_Widget() {
    return *(_Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C**)((uintptr_t)this + 0x460);
}
void _Game_TechArt_Photomode_PhotoModeHUD::PhotoModeHUD_C::UserConstructionScript() {
    return;
}
_Script_CoreUObject::Class* _Game_TechArt_Photomode_PhotoModeHUD::PhotoModeHUD_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/TechArt/Photomode/PhotoModeHUD.PhotoModeHUD_C");
    return result;
}
void _Game_TechArt_Photomode_PhotoModeHUD::PhotoModeHUD_C::ReceiveBeginPlay() {
    return;
}
void _Game_TechArt_Photomode_PhotoModeHUD::PhotoModeHUD_C::ExecuteUbergraph_PhotoModeHUD(int32_t EntryPoint) {
    return;
}
