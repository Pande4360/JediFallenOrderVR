#include "..\FUObjectArray.hpp"
#include "UI_PauseMenuBtn_Selector_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuToggle\UI_PauseMenuToggle_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/PauseMenu/UI_PauseMenuBtn_Selector.UI_PauseMenuBtn_Selector_C");
    return result;
}
