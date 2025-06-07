#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDesignableUserWidget.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsDesignableUserWidget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsDesignableUserWidget");
    return result;
}
void _Script_RsTechRT::RsDesignableUserWidget::OnSynchronizeProperties() {
    return;
}
