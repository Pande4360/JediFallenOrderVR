#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RichTextBlockDecorator.hpp"
_Script_CoreUObject::Class* _Script_UMG::RichTextBlockDecorator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.RichTextBlockDecorator");
    return result;
}
