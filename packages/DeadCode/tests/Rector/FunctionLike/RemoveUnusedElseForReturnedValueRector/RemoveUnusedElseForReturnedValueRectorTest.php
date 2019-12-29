<?php

declare(strict_types=1);

namespace Rector\DeadCode\Tests\Rector\FunctionLike\RemoveUnusedElseForReturnedValueRector;

use Iterator;
use Rector\DeadCode\Rector\FunctionLike\RemoveUnusedElseForReturnedValueRector;
use Rector\Testing\PHPUnit\AbstractRectorTestCase;

final class RemoveUnusedElseForReturnedValueRectorTest extends AbstractRectorTestCase
{
    /**
     * @dataProvider provideDataForTest()
     */
    public function test(string $file): void
    {
        $this->doTestFile($file);
    }

    public function provideDataForTest(): Iterator
    {
        return $this->yieldFilesFromDirectory(__DIR__ . '/Fixture');
    }

    protected function getRectorClass(): string
    {
        return RemoveUnusedElseForReturnedValueRector::class;
    }
}