<?php

namespace Rector\Tests\TypeDeclaration\Rector\FunctionLike\ParamTypeDeclarationRector\Fixture;

final class ThisClass
{
    /**
     * @param $this $param
     * @param null|$this $param2
     * @return $this
     */
    function someFunction($param, $param2)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\FunctionLike\ParamTypeDeclarationRector\Fixture;

final class ThisClass
{
    /**
     * @param $this $param
     * @param null|$this $param2
     * @return $this
     */
    function someFunction(self $param, ?self $param2)
    {
    }
}

?>
