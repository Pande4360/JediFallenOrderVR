#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "ColorBinding.hpp"
#include "PropertyBinding.hpp"
_Script_CoreUObject::LinearColor _Script_UMG::ColorBinding::GetLinearValue() {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::ColorBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ColorBinding");
    return result;
}
_Script_SlateCore::SlateColor _Script_UMG::ColorBinding::GetSlateValue() {
    return;
}
