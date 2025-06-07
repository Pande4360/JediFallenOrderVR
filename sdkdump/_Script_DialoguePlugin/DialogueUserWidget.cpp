#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DialogueNode.hpp"
#include "DialogueUserWidget.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_Engine::Actor*& _Script_DialoguePlugin::DialogueUserWidget::get_NPCActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Script_DialoguePlugin::DialogueUserWidget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DialoguePlugin.DialogueUserWidget");
    return result;
}
void _Script_DialoguePlugin::DialogueUserWidget::RunEventsForNode(_Script_DialoguePlugin::DialogueNode Node) {
    return;
}
bool _Script_DialoguePlugin::DialogueUserWidget::IsConditionsMetForNode(_Script_DialoguePlugin::DialogueNode Node) {
    return;
}
