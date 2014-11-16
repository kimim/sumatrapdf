// DON'T EDIT MANUALLY !!!!
// auto-generated by gen_txt.py !!!!

using namespace sertxt;

struct ButtonVectorDef {
    const char *  name;
    const char *  clicked;
    const char *  path;
    const char *  styleDefault;
    const char *  styleMouseOver;
};

struct ButtonDef {
    const char *   name;
    const WCHAR *  text;
    const char *   style;
};

struct ScrollBarDef {
    const char *  name;
    const char *  style;
    const char *  cursor;
};

struct DirectionalLayoutDataDef {
    const char *  controlName;
    const char *  sla;
    const char *  snla;
    const char *  align;
};

struct HorizontalLayoutDef {
    const char *                      name;
    Vec<DirectionalLayoutDataDef*> *  children;
};

struct VerticalLayoutDef {
    const char *                      name;
    Vec<DirectionalLayoutDataDef*> *  children;
};

extern const StructMetadata gButtonVectorDefMetadata;

inline ButtonVectorDef *DeserializeButtonVectorDef(char *data, size_t dataLen)
{
    return (ButtonVectorDef*)Deserialize(data, dataLen, &gButtonVectorDefMetadata);
}

inline ButtonVectorDef *DeserializeButtonVectorDef(TxtNode* root)
{
    return (ButtonVectorDef*)Deserialize(root, &gButtonVectorDefMetadata);
}

inline uint8_t *SerializeButtonVectorDef(ButtonVectorDef *val, size_t *dataLenOut)
{
    return Serialize((const uint8_t*)val, &gButtonVectorDefMetadata, dataLenOut);
}

inline void FreeButtonVectorDef(ButtonVectorDef *val)
{
    FreeStruct((uint8_t*)val, &gButtonVectorDefMetadata);
}
extern const StructMetadata gButtonDefMetadata;

inline ButtonDef *DeserializeButtonDef(char *data, size_t dataLen)
{
    return (ButtonDef*)Deserialize(data, dataLen, &gButtonDefMetadata);
}

inline ButtonDef *DeserializeButtonDef(TxtNode* root)
{
    return (ButtonDef*)Deserialize(root, &gButtonDefMetadata);
}

inline uint8_t *SerializeButtonDef(ButtonDef *val, size_t *dataLenOut)
{
    return Serialize((const uint8_t*)val, &gButtonDefMetadata, dataLenOut);
}

inline void FreeButtonDef(ButtonDef *val)
{
    FreeStruct((uint8_t*)val, &gButtonDefMetadata);
}
extern const StructMetadata gScrollBarDefMetadata;

inline ScrollBarDef *DeserializeScrollBarDef(char *data, size_t dataLen)
{
    return (ScrollBarDef*)Deserialize(data, dataLen, &gScrollBarDefMetadata);
}

inline ScrollBarDef *DeserializeScrollBarDef(TxtNode* root)
{
    return (ScrollBarDef*)Deserialize(root, &gScrollBarDefMetadata);
}

inline uint8_t *SerializeScrollBarDef(ScrollBarDef *val, size_t *dataLenOut)
{
    return Serialize((const uint8_t*)val, &gScrollBarDefMetadata, dataLenOut);
}

inline void FreeScrollBarDef(ScrollBarDef *val)
{
    FreeStruct((uint8_t*)val, &gScrollBarDefMetadata);
}
extern const StructMetadata gDirectionalLayoutDataDefMetadata;

inline DirectionalLayoutDataDef *DeserializeDirectionalLayoutDataDef(char *data, size_t dataLen)
{
    return (DirectionalLayoutDataDef*)Deserialize(data, dataLen, &gDirectionalLayoutDataDefMetadata);
}

inline DirectionalLayoutDataDef *DeserializeDirectionalLayoutDataDef(TxtNode* root)
{
    return (DirectionalLayoutDataDef*)Deserialize(root, &gDirectionalLayoutDataDefMetadata);
}

inline uint8_t *SerializeDirectionalLayoutDataDef(DirectionalLayoutDataDef *val, size_t *dataLenOut)
{
    return Serialize((const uint8_t*)val, &gDirectionalLayoutDataDefMetadata, dataLenOut);
}

inline void FreeDirectionalLayoutDataDef(DirectionalLayoutDataDef *val)
{
    FreeStruct((uint8_t*)val, &gDirectionalLayoutDataDefMetadata);
}
extern const StructMetadata gHorizontalLayoutDefMetadata;

inline HorizontalLayoutDef *DeserializeHorizontalLayoutDef(char *data, size_t dataLen)
{
    return (HorizontalLayoutDef*)Deserialize(data, dataLen, &gHorizontalLayoutDefMetadata);
}

inline HorizontalLayoutDef *DeserializeHorizontalLayoutDef(TxtNode* root)
{
    return (HorizontalLayoutDef*)Deserialize(root, &gHorizontalLayoutDefMetadata);
}

inline uint8_t *SerializeHorizontalLayoutDef(HorizontalLayoutDef *val, size_t *dataLenOut)
{
    return Serialize((const uint8_t*)val, &gHorizontalLayoutDefMetadata, dataLenOut);
}

inline void FreeHorizontalLayoutDef(HorizontalLayoutDef *val)
{
    FreeStruct((uint8_t*)val, &gHorizontalLayoutDefMetadata);
}
extern const StructMetadata gVerticalLayoutDefMetadata;

inline VerticalLayoutDef *DeserializeVerticalLayoutDef(char *data, size_t dataLen)
{
    return (VerticalLayoutDef*)Deserialize(data, dataLen, &gVerticalLayoutDefMetadata);
}

inline VerticalLayoutDef *DeserializeVerticalLayoutDef(TxtNode* root)
{
    return (VerticalLayoutDef*)Deserialize(root, &gVerticalLayoutDefMetadata);
}

inline uint8_t *SerializeVerticalLayoutDef(VerticalLayoutDef *val, size_t *dataLenOut)
{
    return Serialize((const uint8_t*)val, &gVerticalLayoutDefMetadata, dataLenOut);
}

inline void FreeVerticalLayoutDef(VerticalLayoutDef *val)
{
    FreeStruct((uint8_t*)val, &gVerticalLayoutDefMetadata);
}

