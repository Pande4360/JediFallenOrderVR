#include "..\FUObjectArray.hpp"
#include "UI_Credits_Scrolling_MajorHeader_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
void _Game_UI_Credits_UI_Credits_Scrolling_MajorHeader::UI_Credits_Scrolling_MajorHeader_C::ExecuteUbergraph_UI_Credits_Scrolling_MajorHeader(int32_t EntryPoint) {
    return;
}
void* _Game_UI_Credits_UI_Credits_Scrolling_MajorHeader::UI_Credits_Scrolling_MajorHeader_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x630);
}
void* _Game_UI_Credits_UI_Credits_Scrolling_MajorHeader::UI_Credits_Scrolling_MajorHeader_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
void _Game_UI_Credits_UI_Credits_Scrolling_MajorHeader::UI_Credits_Scrolling_MajorHeader_C::Construct() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_Credits_UI_Credits_Scrolling_MajorHeader::UI_Credits_Scrolling_MajorHeader_C::get_TextBlock_121() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x610);
}
void* _Game_UI_Credits_UI_Credits_Scrolling_MajorHeader::UI_Credits_Scrolling_MajorHeader_C::get_MajorHeader() {
    return (void*)((uintptr_t)this + 0x618);
}
void _Game_UI_Credits_UI_Credits_Scrolling_MajorHeader::UI_Credits_Scrolling_MajorHeader_C::PreConstruct(bool IsDesignTime) {
    return;
}
_Script_CoreUObject::Class* _Game_UI_Credits_UI_Credits_Scrolling_MajorHeader::UI_Credits_Scrolling_MajorHeader_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Credits/UI_Credits_Scrolling_MajorHeader.UI_Credits_Scrolling_MajorHeader_C");
    return result;
}
