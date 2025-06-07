#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsUiRoot.hpp"
#include "RsUiWindow.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Script_RsGameTechRT::RsUiRoot::get_ExistingWindows() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Script_RsGameTechRT::RsUiRoot::get_OnInputDeviceChanged() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_RsGameTechRT::RsUiRoot::GetCurrentUiInputDevice() {
    return;
}
void* _Script_RsGameTechRT::RsUiRoot::get_SavingIndicatorWidget() {
    return (void*)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsUiRoot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsUiRoot");
    return result;
}
void _Script_RsGameTechRT::RsUiRoot::OnLoadGameFailed(bool bHasBackup) {
    return;
}
int32_t& _Script_RsGameTechRT::RsUiRoot::get_SavingIndicatorZOrder() {
    return *(int32_t*)((uintptr_t)this + 0x220);
}
float& _Script_RsGameTechRT::RsUiRoot::get_SavingIndicatorMinDuration() {
    return *(float*)((uintptr_t)this + 0x224);
}
void* _Script_RsGameTechRT::RsUiRoot::get_OpenWindows() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_RsGameTechRT::RsUiRoot::GetOpenUiWindows() {
    return;
}
void _Script_RsGameTechRT::RsUiRoot::SetSavingIndicatorVisible(bool bShowRequested, bool bShowText) {
    return;
}
void _Script_RsGameTechRT::RsUiRoot::Reset() {
    return;
}
void _Script_RsGameTechRT::RsUiRoot::OnReset() {
    return;
}
_Script_RsGameTechRT::RsUiWindow* _Script_RsGameTechRT::RsUiRoot::OpenUiWindow(void* UiWindowClass, bool bCloseOtherWindows, int32_t ZOrder) {
    return;
}
void _Script_RsGameTechRT::RsUiRoot::OnSaveGameFailed() {
    return;
}
void _Script_RsGameTechRT::RsUiRoot::OnLoadGameMissingContent() {
    return;
}
bool _Script_RsGameTechRT::RsUiRoot::GetSavingIndicatorTextVisible() {
    return;
}
bool _Script_RsGameTechRT::RsUiRoot::IsUiWindowOpen(void* UiWindowClass) {
    return;
}
_Script_RsGameTechRT::RsUiRoot* _Script_RsGameTechRT::RsUiRoot::GetHudRoot(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_RsGameTechRT::RsUiWindow* _Script_RsGameTechRT::RsUiRoot::FindOpenUiWindowOfClass(void* UiWindowClass) {
    return;
}
bool _Script_RsGameTechRT::RsUiRoot::CloseUiWindowOfClass(void* UiWindowClass) {
    return;
}
void _Script_RsGameTechRT::RsUiRoot::CloseAllUiWindows() {
    return;
}
