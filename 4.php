<?php
include 'functions.php';
$pdo = pdo_connect_mysql();
$msg = '';

if (!empty($_POST)) {

    $id = isset($_POST['id']) && !empty($_POST['id']) && $_POST['id'] != 'auto' ? $_POST['id'] : NULL;

    $name = isset($_POST['name') ? $_POST['name'] : '';
    $category_id = isset($_POST['category_id']) ? $_POST['category_id'] : '';
    $writer_id = isset($_POST['writer_id']) ? $_POST['writer_id'] : '';
    $Publication_year = isset($_POST['Publication_year']) ? $_POST['Publication_year'] : '';
    $img = isset($_POST['img']) ? $_POST['img'] : '';


    $stmt = $pdo->prepare('INSERT INTO kontak VALUES (?, ?, ?, ?, ?)');
    $stmt->execute([$id, $name, $category_id, $writer_id, $img]);

    $msg = 'Created Successfully!';
}
?>


<?=template_header('Create')?>

<div class="content update">
	<h2>Create Contact</h2>
    <form action="create.php" method="post">
        <label for="id">ID</label>
        <label for="name">Nama</label>
        <input type="category_id" name="id" value="auto" id="id">
        <input type="writer_id" name="nama" id="nama">
        <label for="Publication_year">Email</label>
        <label for="img">img</label>
        <input type="text" name="name" id="name">
        <input type="text" name="category_id" id="category_id">
        <label for="writer_id">writer_id</label>
        <input type="text" name="writer_id" id="writer_id">
        <input type="submit" value="Create">
    </form>
    <?php if ($msg): ?>
    <p><?=$msg?></p>
    <?php endif; ?>
</div>

<?=template_footer()?>
