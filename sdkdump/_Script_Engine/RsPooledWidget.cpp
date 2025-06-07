#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPooledWidget.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::UserWidget*& _Script_Engine::RsPooledWidget::get_Widget() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::RsPooledWidget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsPooledWidget");
    return result;
}
