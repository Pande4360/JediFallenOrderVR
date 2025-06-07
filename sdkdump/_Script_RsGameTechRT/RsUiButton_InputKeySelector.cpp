#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsUiButton.hpp"
#include "RsUiButton_InputKeySelector.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsUiButton_InputKeySelector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsUiButton_InputKeySelector");
    return result;
}
void _Script_RsGameTechRT::RsUiButton_InputKeySelector::SetIsSelectingKey(bool bSelecting) {
    return;
}
