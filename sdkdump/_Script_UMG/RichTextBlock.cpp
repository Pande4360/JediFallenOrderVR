#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "RichTextBlock.hpp"
#include "RichTextBlockDecorator.hpp"
#include "TextLayoutWidget.hpp"
void* _Script_UMG::RichTextBlock::get_InstanceDecorators() {
    return (void*)((uintptr_t)this + 0x358);
}
void* _Script_UMG::RichTextBlock::get_Text() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_UMG::RichTextBlock::get_DecoratorClasses() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_Engine::DataTable*& _Script_UMG::RichTextBlock::get_TextStyleSet() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x140);
}
_Script_CoreUObject::Class* _Script_UMG::RichTextBlock::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.RichTextBlock");
    return result;
}
void _Script_UMG::RichTextBlock::SetText(void*& InText) {
    return;
}
_Script_UMG::RichTextBlockDecorator* _Script_UMG::RichTextBlock::GetDecoratorByClass(void* DecoratorClass) {
    return;
}
