#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsMeshWidget.hpp"
#include "..\_Script_UMG\SlateVectorArtData.hpp"
#include "..\_Script_UMG\Widget.hpp"
_Script_UMG::SlateVectorArtData*& _Script_RsTechRT::RsMeshWidget::get_VectorArtData() {
    return *(_Script_UMG::SlateVectorArtData**)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsMeshWidget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsMeshWidget");
    return result;
}
