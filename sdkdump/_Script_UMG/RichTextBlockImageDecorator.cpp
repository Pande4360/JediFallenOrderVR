#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "RichTextBlockDecorator.hpp"
#include "RichTextBlockImageDecorator.hpp"
_Script_Engine::DataTable*& _Script_UMG::RichTextBlockImageDecorator::get_ImageSet() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_UMG::RichTextBlockImageDecorator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.RichTextBlockImageDecorator");
    return result;
}
