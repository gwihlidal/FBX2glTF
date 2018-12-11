
const std::vector<std::string> FbxMaterialsAccess::GetUserProperties(const int polygonIndex) const
{
    if (mappingMode != FbxGeometryElement::eNone) {
        const int materialNum = indices->GetAt((mappingMode == FbxGeometryElement::eByPolygon) ? polygonIndex : 0);
        if (materialNum < 0) {
            return std::vector<std::string>();
        }
        return userProperties.at((unsigned long)materialNum);
    }
    return std::vector<std::string>();
}
