#include "..\FUObjectArray.hpp"
#include "UI_TutorialCompleteCheck_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C::get_Feedback() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C::get_Img_MoveComplete() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
void _Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C::PlayFeedback() {
    return;
}
_Script_UMG::Image*& _Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C::get_Img_MoveComplete2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
void _Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C::ExecuteUbergraph_UI_TutorialCompleteCheck(int32_t EntryPoint) {
    return;
}
_Script_CoreUObject::Class* _Game_UI_Map_UI_TutorialCompleteCheck::UI_TutorialCompleteCheck_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Map/UI_TutorialCompleteCheck.UI_TutorialCompleteCheck_C");
    return result;
}
